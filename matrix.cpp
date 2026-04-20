#include <iostream>
#include <vector>
#include <memory>
#include <iomanip>

class Matrix {
private:
    int rows;
    int cols;
   
    std::vector<double> data;

   
    size_t index(int r, int c) const {
        return r * cols + c;
    }




    
public:

    Matrix(int r, int c) : rows(r), cols(c), data(r * c) {
        if (r <= 0 || c <= 0) {
            throw std::invalid_argument("Matrix dimensions must be positive.");
        }
    }

    
    void set(int r, int c, double val) {
        if (r >= rows || c >= cols) {
            throw std::out_of_range("Index out of bounds.");
        }
        data[index(r, c)] = val;
    }

    double get(int r, int c) const {
        if (r >= rows || c >= cols) {
            throw std::out_of_range("Index out of bounds.");
        }
        return data[index(r, c)];
    }

   
    void print() const {
        std::cout << "Matrix (" << rows << "x" << cols << "):" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << std::fixed << std::setprecision(2) 
                          << std::setw(6) << data[index(i, j)];
            }
            std::cout << std::endl;
        }
    }

    std::unique_ptr<Matrix> transpose() const {
      
        auto T = std::make_unique<Matrix>(cols, rows);

       
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                // Get value from old (i, j)
                double val = data[index(i, j)]; 
                
                // Set value in new (j, i)
                T->set(j, i, val);
            }
        }
        
       
        return T;
    }
};

// --- Example Usage ---
int main() {
    // Create an example 3x2 Matrix
    Matrix A(3, 2); 
    A.set(0, 0, 1.0); A.set(0, 1, 2.0);
    A.set(1, 0, 3.0); A.set(1, 1, 4.0);
    A.set(2, 0, 5.0); A.set(2, 1, 6.0);

    std::cout << "--- Original Matrix A (3x2) ---" << std::endl;
    A.print();
    std::cout << std::endl;

    
    std::unique_ptr<Matrix> T_ptr = A.transpose();

    std::cout << "--- Transposed Matrix T (2x3) ---" << std::endl;
    T_ptr->print();
    std::cout << std::endl;


    std::cout << "--- Check Original A (Unchanged) ---" << std::endl;
    A.print(); 

  
    return 0;
}