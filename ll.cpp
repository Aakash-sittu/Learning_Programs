#include <iostream>
#include <algorithm>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
int main(int argc, char const *argv[])
{
    node *ui = new node(10);
    cout << ui->data << endl;
    cout << ui->next << endl;
    return 0;
}
