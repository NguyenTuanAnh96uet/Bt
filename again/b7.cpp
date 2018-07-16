#include "b7.h"

B7::B7()
{

}
B7 B7::operator +()
{
    soA++;
    soB++;
    return *this;
}
B7 B7::operator -()
{
    soA--;
    soB--;
    return *this;
}
