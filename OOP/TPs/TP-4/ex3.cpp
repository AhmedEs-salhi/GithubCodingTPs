#include <iostream>
#include <vector>
using namespace std;

void print2DVector(vector<vector<float>> vec, int rows, int columns)
{
        int counter(0);

        cout << "\nList Output:\n";
        for (int i(0); i < rows; i++)
        {
            for (int j(0); j < columns; j++)
            {
                counter = 0;
                cout << vec[i][j];
                if (counter++ < columns - 1)
                    cout << " ";
            }
            cout << endl;
        }
}

void read2DVector(vector<vector<float>> &vec, int rows, int columns)
{
    for (int i(0); i < rows; i++)
    {
        for (int j(0); j < columns; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> vec[i][j];
        }
    }
}

float rowsAverage(vector<float> vec, int size)
{
    float rowsAverage;
    return rowsAverage;
}

float columnAverage(vector<float> vec, int rows, int columns)
{
    float columnAverage;

    for (int i(0); i < rows; i++)
    {
        for (int j(0); j < columns; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> vec[i][j];
        }
    }

    return columnAverage;
}

float vectorAverage(vector<float> vec, int size)
{
    int vectorAverage;

    return vectorAverage;
}

int main(void)
{
    int rows, columns;

    cout << "Rows: ";
    cin >> rows;
    cout << "Columns: ";
    cin >> columns;

    vector<vector<float>> vec(rows, vector<float>(columns));
    read2DVector(vec, rows, columns);
    print2DVector(vec, rows, columns);

    return 0;
}