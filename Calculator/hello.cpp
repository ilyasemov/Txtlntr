#include <iostream>
#include <getopt.h>
using namespace std;
int main(int argc, char *argv[])
{
	 if (argc==1)
    {
        cout<<"Чтобы посчитать произведение, введите параметр -u"<<endl;
        cout<<"Чтобы посчитать частное, введите параметр -d"<<endl;
    }        
	int opt, i, res = 1, x,t;
    int b, y, res2 = 1;
	while ((opt = getopt (argc, argv, "u:d:")) != -1)
        {
            switch (opt)
            {
                case 'u':
        			for(i = 0; i<argc; i++)
        			{
            				cout<<argv[i]<<endl;
        			}			
        			for(i=2; i<argc; i++)
        			{
            			x = strtol(argv[i], NULL, 0);
            			res=res * x;
        			}
        		cout<<res<<endl;
               	break;
               	
               	case 'd':
    				for(i = 0; i<argc; i++)
   			 		{
        				cout<< argv[i] << endl;
    				}	
    				b = 0;
    				for(i=3; i<argc; i++)
    				{
       					x = strtol(argv[i], NULL, 0);
          				t = strtol(argv[2], NULL, 0);
        				res2=res2 * x;
    				}
                    b=t/res2;
                    y=t%res2;
    			cout<< b <<'.'<< y<<endl;
                break;       
            }
        }
}
