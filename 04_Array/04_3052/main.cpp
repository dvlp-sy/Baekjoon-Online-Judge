#include <iostream>

using namespace std;

struct node
{
    node* next;
    int elem;
};

int main()
{
    int n, cnt=0;
    node* root = new node;
    root->next = NULL;
    root->elem = -1;
    node* location;
    
    for (int i=0; i<10; i++)
    {
        cin >> n;
        n %= 42;
        int flag = 1;
        
        location = root;
        while (location->next != NULL && flag)
        {
            if (location->next->elem == n)
                flag = 0;
            else
                location = location->next;
            
        }
        if (location->next == NULL && flag)
        {
            location->next = new node;
            location->next->elem = n;
        }
    }
    
    location = root;
    while (location->next != NULL)
    {
        cnt++;
        node* deleteNode = location;
        location = location->next;
        delete deleteNode;
    }
    cout << cnt << '\n';
}
