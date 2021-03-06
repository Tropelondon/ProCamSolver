///////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2012 Daniel Tang.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing,
//   software distributed under the License is distributed on an "AS
//   IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
//   express or implied.  See the License for the specific language
//   governing permissions and limitations under the License.
//
///////////////////////////////////////////////////////////////////////////////
#ifndef CORRESPONDENCE_H
#define CORRESPONDENCE_H

#include "stdincludes.h"
#include "GPixel.h"

///////////////////////////////////////////////////////////////////////////////
/// Class to represent the pixel positions of a single 3D point, projected
/// into two cameras, 'i' and 'j'
//////////////////////////////////////////////////////////////////////////////
class Correspondence {
public:
  GPixel	i;
  GPixel	j;
};


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
inline std::istream &operator >>(std::istream &in, Correspondence &c) {
  in >> c.i.id >> c.j.id >> c.i.x >> c.i.y >> c.j.x >> c.j.y;
  return(in);
}


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
inline std::ostream &operator <<(std::ostream &out, Correspondence &c) {
  out << c.i << " <-> " << c.j;
  return(out);
}

#endif
