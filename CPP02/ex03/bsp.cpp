
#include "Fixed.hpp"
#include "Point.hpp"



// ony 2 D 
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
 
    float ax = a.get_X();
    float ay = a.get_Y();
    float bx = b.get_X();
    float by = b.get_Y();
    float cx = c.get_X();
    float cy = c.get_Y();
    float px = point.get_X();
    float py = point.get_Y();


// Fixed ax = a.get_X();
// Fixed ay = a.get_Y();
// Fixed bx = b.get_X();
// Fixed by = b.get_Y();
// Fixed cx = c.get_X();
// Fixed cy = c.get_Y();
// Fixed point_x = point.get_X();
// Fixed point_y = point.get_Y();




    // area formular 
//     Compute the area of triangle ABC.
// Compute the area of triangle PAB, PBC, and PCA (where P is your point).
// If the sum of the three sub-areas equals the area of ABC and none of the 
// sub-areas are zero, the point is inside.
// if the point is not on an edge its inside

    float Abc = fabs((ax*(by-cy) + bx*(cy-ay) + cx*(ay-by)) / 2.0f);
    float PBC = fabs((px*(by-cy) + bx*(cy-py) + cx*(py-by)) / 2.0f);
    float PCA = fabs((ax*(py-cy) + px*(cy-ay) + cx*(ay-py)) / 2.0f);
    float PAB = fabs((ax*(by-py) + bx*(py-ay) + px*(ay-by)) / 2.0f);

    Fixed sum_Subarea = (PBC + PCA + PAB);

    std::cout << " summe subarea: " << sum_Subarea << " verglichen mit Triangle :"
    << Abc << std::endl;
    if(Abc == 0)
        return false;
    if(PBC == 0 || (PCA == 0)|| (PAB == 0))
        return false;
    if (sum_Subarea == Abc)
        return true;
    return false;
}


// functioniert noch nicht mit komma zahlen 
