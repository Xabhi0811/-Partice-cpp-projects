#include <bits/stdc++.h>
using namespace std;

// Simple accuracy metric (for demo)
double accuracy(const vector<int>& y, const vector<int>& y_pred) {
    int correct = 0;
    for (int i = 0; i < y.size(); i++)
        if (y[i] == y_pred[i]) correct++;
    return (double)correct / y.size();
}

// Dummy model: predicts majority class
vector<int> trainAndPredict(const vector<vector<int>>& X,
                            const vector<int>& y,
                            const vector<int>& features) {
    int ones = count(y.begin(), y.end(), 1);
    int pred = (ones > y.size() / 2) ? 1 : 0;
    return vector<int>(y.size(), pred);
}

vector<int> greedyFeatureSelection(const vector<vector<int>>& X,
                                   const vector<int>& y) {
    int n = X[0].size();
    vector<int> selected;
    vector<int> remaining(n);
    iota(remaining.begin(), remaining.end(), 0);

    while (!remaining.empty()) {
        double bestScore = -1;
        int bestFeature = -1;

        for (int f : remaining) {
            vector<int> trial = selected;
            trial.push_back(f);

            auto y_pred = trainAndPredict(X, y, trial);
            double score = accuracy(y, y_pred);

            if (score > bestScore) {
                bestScore = score;
                bestFeature = f;
            }
        }

        selected.push_back(bestFeature);
        remaining.erase(remove(remaining.begin(), remaining.end(), bestFeature),
                        remaining.end());
    }
    return selected;
}

int main() {
    vector<vector<int>> X = {{1,0},{1,1},{0,0},{0,1}};
    vector<int> y = {1,1,0,0};

    auto selected = greedyFeatureSelection(X, y);

    cout << "Selected feature order: ";
    for (int f : selected) cout << f << " ";
}
