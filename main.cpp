/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



struct mask {
    
    short int subimg[3][3];
};

struct hyper_param {
    
    int num_layers;
    int *layer_list;
    int cnn_type;
    
};

struct win_type {
    int width;
    int length;
    int depth;
};

struct layer_param {
    int width;
    int length;
    int depth;
};

struct image {
    
    short int  *ptr;
    win_type wtype;
       
    
};

class window3x3 {
    
    int *full_image;
    
    image y;
    
    void get_mask(void)
    {
        
        
    }
    
};

class cnn {
    
    layer_param lparam;
    
    win_type wtype;

    image  x,y;
    
    void set_param ()
    {
        wtype.length = 64;
        wtype.width  = 64;
        wtype.depth  = 3;
        
    }
    
    void alloc_mem()
    {
    
        
    }
};

int main()
{
    printf("Hello World");

    return 0;
}
