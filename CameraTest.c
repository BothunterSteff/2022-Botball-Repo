#include <kipr/wombat.h>



int main()
{
    
    
    
    
    
    
    camera_open_black();
    camera_load_config("red_c");

    
    
    while(69){
    
        
        camera_update();

        //printf("%i",get_object_center_x(0,0));

		if(get_object_count(0) != 0){
        printf("%i", get_object_count(0));
        if(get_object_center_x(0,0)>110){
            motor(0, -10);
            motor(1, -10);
        }
        else if(get_object_center_x(0,0)<20){
            motor(0, 10);
            motor(1, 10);
        }
        else{
        
            motor(0, -30);
            motor(1, 30);
            
        }
        }
        else{
        
            motor(0, 0);
            motor(1, 0);
        
        }
        
    
    
    }
    
    return 0;
}
