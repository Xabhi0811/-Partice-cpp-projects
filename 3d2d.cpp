var solveNQueens = function(n) {
    const result = [];

    const board = Array.from(
        { length: n },
        () => Array(n).fill(".")
    );

    const cols = new Set();
    const diagonals1 = new Set();
    const diagonals2 = new Set();

    function backtrack(row) {
        // All queens are placed
        if (row === n) {
            result.push(
                board.map(r => r.join(""))
            );
            return;
        }

        for (let col = 0; col < n; col++) {
            const diagonal1 = row - col;
            const diagonal2 = row + col;

            // Check whether this position is safe
            if (
                cols.has(col) ||
                diagonals1.has(diagonal1) ||
                diagonals2.has(diagonal2)
            ) {
                continue;
            }

            // Place queen
            board[row][col] = "Q";

            cols.add(col);
            diagonals1.add(diagonal1);
            diagonals2.add(diagonal2);

            // Move to next row
            backtrack(row + 1);

            // Backtrack: remove queen
            board[row][col] = ".";

            cols.delete(col);
            diagonals1.delete(diagonal1);
            diagonals2.delete(diagonal2);
        }
    }

    backtrack(0);

    return result;
};
