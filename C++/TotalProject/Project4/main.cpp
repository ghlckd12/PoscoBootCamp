#include <iostream>
#include <vector>

using namespace std;

// ������ ���� �Լ�
vector<vector<int>> generate_magic_square(int size)
{
    if (size % 2 == 0 || size < 1)
    {
        cout << "Ȧ���� �Է����ּ���";
    }

    vector<vector<int>> magic_square(size, vector<int>(size, 0));

    int num = 1;
    int i = 0, j = size / 2;

    while (num <= size * size) {
        magic_square[i][j] = num;
        num++;

        // ���� ��ġ ���
        int new_i = (i - 1 + size) % size;
        int new_j = (j + 1) % size;

        if (magic_square[new_i][new_j] != 0) {
            new_i = (i + 1) % size;
            new_j = j;
        }

        i = new_i;
        j = new_j;
    }

    return magic_square;
}

// ������ ��� �Լ�
void print_magic_square(const vector<vector<int>>& magic_square)
{
    for (const auto& row : magic_square)
    {
        for (int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main()
{
    int size;
    cout << "Ȧ���� �� �������� ũ�⸦ �Է����ּ��� : ";
    cin >> size;

    print_magic_square(generate_magic_square(size));

    return 0;
}