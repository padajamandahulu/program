#include <iostream>
#include <unistd.h> // untuk fungsi usleep
using namespace std;
 
const char rocket[] =
"            --     --   \n\
           ------ ------ \n\
         ----------------- \n\
       --------------------- \n\
       ---------------------  \n\
       ---------------------  \n\
         -----------------  \n\
           -------------\n\
             ---------\n\
               ------ \n\
    	         -- \n\
                  \n\
	     \n\
	   ";
 
int main()
{
    for (int i = 0; i < 30; i++) cout << endl; // melompat ke bawah konsol
    cout << rocket ;
    int j = 300000;
    for (int i = 0; i < 50; i++) {
        usleep(j); // bergerak lebih cepat,
        j = (int)(j * 0.9); // waktu sleep
        cout << endl; // memindahkan baris roket ke atas
    }
    return 0;
}
