// Copyright (c) 2011-2019 The Cryptonote and Quest developers 
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once 

#include <functional>

namespace Tools {
  
  class SignalHandler
  {
  public:
    static bool install(std::function<void(void)> t);
  };
}
