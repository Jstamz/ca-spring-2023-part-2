//-------------------------------------------------------------------------------------------------
// 4190.308 Computer Architecture                                                       Spring 2023
//
/// @file
/// @brief Image blending (float)
///        This module implements a function that blends two images together filter (floating-point
///        version). Note that CPython uses the 'double' data type for floating point numbers, 
///        so one may observe small differences in the output if the 'float' data type is used.
///
/// @author Your Name <your@email.com>
///
/// @section changelog Change Log
/// 2023/MM/DD Your Name Comment
///
//-------------------------------------------------------------------------------------------------

#include <stdlib.h>
#include "blend.h"


struct Image blend_float(struct Image img1, struct Image img2, int overlay, double alpha)
{
  if (img1.channels != 4) abort();


  // Initialize blended image
  struct Image blended = {
    .height   = img1.height,
    .width    = img1.width,
    .channels = img1.channels
  };
  blended.data = malloc(blended.height*blended.width*blended.channels*sizeof(uint8));
  if (blended.data == NULL) abort();


  // TODO
  // Your work goes here


  return blended;
}
