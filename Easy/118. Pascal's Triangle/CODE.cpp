class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> triangle(numRows); // Create a vector with `numRows` rows

        for (int i = 0; i < numRows; i++)
        {
            // Resize each row to have `i + 1` elements
            triangle[i].resize(i + 1);

            // First and last elements of each row are 1
            triangle[i][0] = 1;
            triangle[i][i] = 1;

            // Compute the middle elements (if any)
            for (int j = 1; j < i; j++)
            {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }

        return triangle;
    }
};
