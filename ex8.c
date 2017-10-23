#include <stdio.h>

//Function 1

int boundary(int x){

    int i; // counter

    printf("+"); // right hand +

    for (i=0; i<x; i++) { // runs for a length of x

        printf("-");

    }

    printf("+"); //left hand +

    return 1;

}



//Function 2

int line(int x){

    int i; //counter

    printf("|"); // right hand border

    for (i=0; i<x; i++) { // runs for alength of x

        printf(".");

    }

    printf("|"); // left hand border

    return 1;

}



//Function 3

int player(int x, int px){

    int i; // counter

    printf("|"); // right hand border

    for (i=0; i<px; i++) { // runs from 0 until the position of player

            printf(".");

        

    }

    printf("@"); // inserts player position

    

    for (i=px; i<x-1; i++) { // continues from px until x

        printf(".");

        

    }

    

    printf("|"); //left hand border

    return 1;

}





int drawroom(int x, int y, int px, int py){

    int i; //counter

    printf("Drawing a box of dimensions %d x %d : \n", x, y);

  

    // top boundary

    boundary(x);

    

    printf("\n");

    

    //grid

    for (i=0; i<py; i++) { // makes vertical lines from 0 until py

        line(x); // prints grid

        printf("\n"); //carriage return

    }

    player(x, px); // prints players location

    printf("\n");// carriage return

    for (i=py; i<y-1; i++) { // continues from py until y

        line(x); // prints grid

        printf("\n"); // carriage return

        

    }

    

    

    

    // bottom boundary

     boundary(x);

    printf("\n");

    return 1;

}

//



int main()

{



    drawroom(2,2,0,0);

    drawroom(8, 8, 0, 5);

    

    getchar();

}
