//Compute the total labour cost for building a wall of 50 m long, 0.2 m wide and 7 m tall.
/*The length of a brick is 10 cm, height is 8 cm and width is 6 cm.
Cost of 1 brick join is 1.50 paisa.*/

#include <stdio.h>

int main()

{
    // Wall dimensions (in meters)
    float wall_length = 50.0;
    float wall_width = 0.2;
    float wall_height = 7.0;

    // Brick dimensions (in meters)
    float brick_length = 0.10;
    float brick_width  = 0.06;
    float brick_height = 0.08;

    // Cost per brick joint (in rupees)
    float cost_per_joint = 0.015;

    // Calculate volumes
    float wall_volume = wall_length * wall_width * wall_height;
    float brick_volume = brick_length * brick_width * brick_height;

    // Number of bricks
    float number_of_bricks = wall_volume / brick_volume;

    // Total labour cost
    float total_cost = number_of_bricks * cost_per_joint;

    // Output
    printf("Volume of wall = %.2f cubic meters\n", wall_volume);
    printf("Volume of one brick = %.5f cubic meters\n", brick_volume);
    printf("Number of bricks = %.0f\n", number_of_bricks);
    printf("Total labour cost = Rs %.2f\n", total_cost);

    return 0;
}
