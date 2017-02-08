#include "iostream"
#include "string"
#include "vector"




std::vector<int> kolejka[10];
std::vector<int> stos[10];


void new_s(int a)
{
    stos[a].clear();
}


void push(int a, int b)
{
    if (stos[a].size() < 10)
        {
            stos[a].push_back(b);
        }
    else if (stos[a].size() == 10)
        std::cout << "error: stack is full\n";
}


void pop(int a)
{
    if (stos[a].empty())
        std::cout << "error: stack is empty\n";
    else if (stos[a].size() > 1)
        stos[a].pop_back();
    else
        stos[a].clear();
}


void stackstack(int a, int b)
{
    if (stos[a].empty() || stos[b].size() == 10)
    {
        std::cout << "error: wrong command\n";
    }
    else
    {
        int x = stos[a][stos[a].size() - 1];
        pop(a);
        push(b, x);
    }
}


void delete_s(int a)
{
    stos[a].clear();
}


void print_s(int a)
{
    if (stos[a].empty())
        std::cout << "empty\n";
    else
    {
        for (int i = 0; i < stos[a].size() - 1; i++)
        {
            std::cout << stos[a][i] << " ";
        }
        std::cout << stos[a][stos[a].size() - 1];
    }
}

void new_q(int a)
{
    kolejka[a].clear();
}


void enqueue(int a, int b)
{
    if (kolejka[a].size() < 10)
    {
        kolejka[a].push_back(b);
    }
    else if (kolejka[a].size() == 10)
    {
        std::cout << "error: queue is full\n";
    }
}


void dequeue(int a)
{
    if (kolejka[a].empty())
    {
        std::cout << "error: queue is empty\n";
    }
    else if (kolejka[a].size() > 1)
        kolejka[a].erase(kolejka[a].begin());
    else
        kolejka[a].clear();
}


void delete_q(int a)
{
    kolejka[a].clear();
}


void print_q(int a)
{
    if (kolejka[a].empty())
    {
        std::cout << "empty\n";
    }
    else
    {
        for (int i = kolejka[a].size() - 1; i >= 1; i--)
        {
            std::cout << kolejka[a][i] << " ";
        }
        std::cout << kolejka[a][0];
    }
}


void stackqueue(int a, int b)
{
    if (stos[a].empty() || kolejka[b].size() == 10)
    {
        std::cout << "error: wrong command\n";
    }
    else
    {
        int x = stos[a][stos[a].size() - 1];
        pop(a);
        enqueue(b, x);
    }
}


void queuequeue(int a, int b)
{
    if (kolejka[a].empty() || kolejka[b].size() == 10)
    {
        std::cout << "error: wrong command\n";
    }
    else
    {
        int x = kolejka[a][0];
        dequeue(a);
        enqueue(b, x);
    }
}


void queuestack(int a, int b)
{
    if (kolejka[a].empty() || stos[b].size() == 10)
    {
        std::cout << "error: wrong command\n";
    }
    else
    {
        int x = kolejka[a][0];
        dequeue(a);
        push(b, x);
    }
}

/***************************************** MAIN ******************************************/
int main()
{
//ios_base::sync_with_stdio;
std::string co;
int a, b;

while (std::cin >> co >> a)
{
//cin >> co >> a;


    if (co == "new_s")
    {
        new_s(a);
    }
    else if (co == "push")
    {
        std::cin >> b;
        push(a, b);
    }
    else if (co == "pop")
    {
        pop(a);
    }
    else if (co == "stack->stack")
    {
        std::cin >> b;
        stackstack(a, b);
    }
    else if (co == "delete_s")
    {
        delete_s(a);
    }
    else if (co == "print_s")
    {
        print_s(a);
    }
    else if (co == "new_q")
    {
        new_q(a);
    }
    else if (co == "enqueue")
    {
        std::cin >> b;
        enqueue(a, b);
    }
    else if (co == "dequeue")
    {
        dequeue(a);
    }
    else if (co == "delete_q")
    {
        delete_q(a);
    }
    else if (co == "print_q")
    {
        print_q(a);
    }
    else if (co == "stack->queue")
    {
        std::cin >> b;
        stackqueue(a, b);
    }
    else if (co == "queue->queue")
    {
        std::cin >> b;
        queuequeue(a, b);
    }
    else if (co == "queue->stack")
    {
        std::cin >> b;
        queuestack(a, b);
    }
}   // END OF WHILE LOOP

return 0;
}
