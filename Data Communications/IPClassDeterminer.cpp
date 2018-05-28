#include <bits/stdc++.h>
#define rangeL(w,x,y,z,a) (w > a || x > a || y > a || z > a)
#define rangeS(w,x,y,z,a) (w < a || x < a || y < a || z < a)
#define ip_class(x,a,b) (x >= a && x <= b)

using namespace std;

void decimaltobinary(int x);

int main()
{
    int ip1,ip2,ip3,ip4;
    bool check;
    try{
        while(true){
            check = true;
            printf("Please enter an ip address or\n");
            printf("Type -1 to exit\n\n");
            scanf("%d.%d.%d.%d", &ip1,&ip2,&ip3,&ip4);
            if( ip1 == -1 )
            {
                printf("\nProgram has ended\n");
                break;
            }
            if( rangeL(ip1,ip2,ip3,ip4,255) || rangeS(ip1,ip2,ip3,ip4,0) )
            {
                printf("Your IP is not in range or is not valid.\n\n");
            }
            else
            {
                printf("Your given ip address is: ");
                printf("%d.%d.%d.%d\n", ip1,ip2,ip3,ip4);

                if(ip_class(ip1,1,126) )
                    printf("IP Address is class A.\n");
                else if(ip_class(ip1,127,191) )
                    printf("IP Address is class B.\n");
                else if(ip_class(ip1,192,223) )
                    printf("IP Address is class C.\n");
                else if(ip_class(ip1,224,239) )
                    printf("IP Address is class D.\n");
                else if(ip_class(ip1,240,254))
                    printf("IP Address is class E.\n");
                else {
                    printf("Ip address is not valid\n");
                    check = false;
                }
                if(check == true)
                {
                    if(ip_class(ip1,10,10) )
                        printf("IP address is private in class A.\n");
                    else if(ip_class(ip1,172,172) & ip_class(ip2,16,31))
                        printf("IP address is private in class B.\n");
                    else if(ip_class(ip1,192,192) & ip_class(ip2,168,168))
                        printf("IP address is private in class C.\n");
                    else
                        printf("IP address is public.\n");

                    printf("Binary representation of the IP address is: \n");
                    decimaltobinary(ip1);
                    printf(".");
                    decimaltobinary(ip2);
                    printf(".");
                    decimaltobinary(ip3);
                    printf(".");
                    decimaltobinary(ip4);
                    printf("\n\n");
                }
            }
        }
    }
    catch(exception &e)
    {
        cerr << e.what() << endl;
    }
    return 0;
}
void decimaltobinary(int x)
{
    int a[8];
    int i = 0;
    memset(a, 0, sizeof a);
    while(x != 0)
    {
        a[i] = x % 2;
        x /= 2;
        i++;
    }
    for(int i = 7; i >= 0; i--)
    {
        cout << a[i];
    }
}
