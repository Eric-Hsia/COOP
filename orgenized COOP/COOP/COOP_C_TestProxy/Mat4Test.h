
#include "../COOP/object.h"

DEF_CLASS(Mat4Test)

int hight;
int width;

END_DEF(Mat4Test);

FUNCTIONS(Mat4Test, int, int)
BASE_FUNCTION_PTR(Mat4Test, findLoc, int row, int col, int* loc);
FUNCTION_PTR(Mat4Test, getWidth, int* width);
END_FUNCTIONS(Mat4Test);

FUNCTION_H(Mat4Test, findLoc, int row, int col,int * loc);
FUNCTION_H(Mat4Test, getWidth, int* width);

DEF_INIT_CLASS(Mat4Test);