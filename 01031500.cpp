#include <iostream>
#include <string>
#include <array>
using namespace std;

class Tree
{
protected:
    static const int rows = 11;
    static const int cols = 11;
    array<array<char, cols>, rows> DisplayTree;
    string TypeOfTree;
   
    virtual void InitDisplayTree()
    {
        DisplayTree = { {
            
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', '\\', ' ', '|', ' ', '|', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', '\\', '/', ' ', '/', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', '/', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        } };
    }

public:
    Tree()
    {
        InitDisplayTree();
    }

    virtual void Display()
    {
        cout << "1) Сухе дерево:";

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << DisplayTree[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

class PoplarTree : public Tree
{
protected:
    void InitDisplayTree() override
    {
        DisplayTree = { {
            {' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', '/', ' ', '\\', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', '\\', ' ', ' ', '\\', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', '/', ' ', '|', ' ', '\\', ' ', ' ', ' '},
            {' ', ' ', ' ', '|', ' ', '|', ' ', '|', ' ', ' ', ' '},
            {' ', ' ', ' ', '/', ' ', '|', ' ', '/', ' ', ' ', ' '},
            {' ', ' ', ' ', '\\', ' ', '|', '/', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', '\\', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '}
        } };
    }
public:
    PoplarTree()
    {
        InitDisplayTree();
    }
    void Display() override
    {
        cout << "2) Тополя:" << endl << endl;

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << DisplayTree[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

class PineTree : public Tree
{
protected:
    void InitDisplayTree() override
    {
        DisplayTree = { {
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '\\', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', '/', ' ', '\\', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', '/', '/', '|', '\\', '\\', ' ', ' ', ' '},
            {' ', ' ', ' ', '/', '/', '|', '\\', '\\', ' ', ' ', ' '},
            {' ', ' ', '/', '/', '/', '|', '\\', '\\', '\\', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '}
        } };
    }
public:
    PineTree()
    {
        InitDisplayTree();
    }
    void Display() override
    {
        cout << endl << "3) Сосна:";

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << DisplayTree[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

class SpruceTree : public Tree
{
protected:
    void InitDisplayTree() override
{
    DisplayTree = { {
        
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', '*', '|', '*', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', '*', '|', '*', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', '*', '*', '|', '*', '*', ' ', ' ', ' '},
        {' ', ' ', ' ', '*', '*', '|', '*', '*', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    } };
}
public:
    SpruceTree()
    {
        InitDisplayTree();
    }
    void Display() override
    {
        cout << endl << "4) Ялинка:";

        for (int r = 0; r < rows; r++)
        {
            for (int c = 0; c < cols; c++)
            {
                cout << DisplayTree[r][c] << ' ';
            }
            cout << endl;
        }
    }
};
int main()
 {
    system("chcp 1251 > nul");

    Tree* trees[4];

    trees[0] = new Tree();
    trees[1] = new PoplarTree();
    trees[2] = new PineTree();
    trees[3] = new SpruceTree();

    for (int a = 0; a < 4; a++)
    {
        trees[a]->Display();
    }

    for (int a = 0; a < 4; a++)
    {
        delete trees[a];
    }

    return 0;
}
