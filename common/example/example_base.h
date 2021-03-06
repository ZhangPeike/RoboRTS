/****************************************************************************
 *  Copyright (C) 2018 RoboMaster.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program. If not, see <http://www.gnu.org/licenses/>.
 ***************************************************************************/
#ifndef COMMON_EXAMPLE_BASE_H
#define COMMON_EXAMPLE_BASE_H
#include <iostream>

#include "common/error_code.h"
#include "common/log.h"

namespace rrts {
namespace common {
class ExampleBase {
 public:
  ExampleBase(int param) : param_(param) { LOG_INFO <<__FUNCTION__<< " contor!"; };
  virtual ~ExampleBase() { LOG_INFO << __FUNCTION__<<" detor!" ; }
  virtual ErrorInfo Function()= 0;
 protected:
  int param_;
};

}
}
#endif //RRTS_EXAMPLE_BASE_H
