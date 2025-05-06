#include <iostream>
#define MAX 100
using namespace std;
struct tind
{
    char car;
    int value;
};
tind evalpost(char[]);
int variable(char);
int value(char);
void empile(tind);
void depile(tind&);
int unaire(char);

tind pile[MAX];
int sommet = -1;


int main()
{
    char expr[100];

    cout << "Enter your postfix expression (ex: AB+CD-*#) : ";
    cin >> expr;

    tind resultat = evalpost(expr);
    cout << "Final result : " << resultat.value << endl;

    return 0;
}

tind operation(char op, tind val)
{
    tind result;
    result.car = op;

    switch(op)
    {
        case '!':
            result.value = !val.value;
            break;
        case '~':
            result.value = ~val.value;
            break;
        default:
            cout << "Unknown unary operator !" << endl;
            result.value = 0;
    }

    return result;
}

tind operation(char op, tind val1, tind val2)
{
    tind result;
    result.car = op;

    switch(op)
    {
        case '+':
            result.value = val1.value + val2.value;
            break;
        case '-':
            result.value = val1.value - val2.value;
            break;
        case '*':
            result.value = val1.value * val2.value;
            break;
        case '/':
            if (val2.value != 0)
                result.value = val1.value / val2.value;
            else {
                cout << "Error: division by 0" << endl;
                result.value = 0;
            }
            break;
        case '&':
            result.value = val1.value & val2.value;
            break;
        case '|':
            result.value = val1.value | val2.value;
            break;
        default:
            cout << "Unknown binary operator !" << endl;
            result.value = 0;
    }

    return result;
}

int unaire(char c)
{
    if (c == '!' || c == '&' || c == '|') return 1;
    else return 0;
}

void depile(tind &val)
{
    if (sommet >= 0)
    {
        val = pile[sommet--];
    }
    else
    {
        cout << "Empty stack !" << endl;
        val = {'#', 0};
    }
}

void empile(tind val)
{
    if(sommet < MAX - 1)
    {
        pile[++sommet] = val;
    }
    else
    {
        cout << "Stack pile !" << endl;
    }
}

int variable(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) return 1;
    else return 0;
}

int value(char var)
{
    int val;
    cout << "Enter value of " << var << " : ";
    cin >> val;
    return val;
}


tind evalpost(char evalpost[])
{
    int i=0;
    tind valLeft, valRight, valOp, result;
    while(evalpost[i] != '#')
    {
        if(variable(evalpost[i]))
        {
            tind tmp;
            tmp.car = evalpost[i];
            tmp.value = value(evalpost[i]);
            empile(tmp);
        }
        else if (unaire(evalpost[i]))
        {
            depile(valRight);
            empile(operation(evalpost[i], valRight));
        } else
        {
            depile(valRight);
            depile(valLeft);
            empile(operation(evalpost[i], valLeft, valRight));
        }
        i++;
    }
    depile(result);
    return result;
}