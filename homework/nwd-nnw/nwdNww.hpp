#pragma once

int NWD(int lhs, int rhs) {
bool searching = true;
//For 1 and 2 > 0
  if(lhs > 0 && rhs > 0){
  int i = std::min(lhs, rhs);
  while (searching){
    if (lhs%i == 0 && rhs%i == 0){
      return i;
      }
    i--;
    }
  }
    if (lhs < 0 || rhs < 0){
        //For 1 and 2 < 0
    int i = std::min(lhs, rhs);
    while(searching){
      if (lhs%i == 0 && rhs%i == 0){
        return i*-1;
      }
      i++;
    }
  }
   if (lhs == 0 && rhs == 0) {
    return 0;
  } else {
    return std::max(lhs, rhs);
  }
  return -1;
}



int NWW(int lhs, int rhs) {
    bool searching = true;
    if(lhs == 0 || rhs ==0){
      return 0;
    }
    if(lhs < 0){
      lhs = lhs * -1;
    }
    if(rhs < 0){
      rhs = rhs * -1;
    }
    if (lhs > rhs){
        int i = 2;
        while (searching){
            if ((rhs * i)%lhs == 0){
                return rhs*i;
            }
            else{
                i++;
            }
        }
    }
        if (lhs < rhs){
        int i = 2;
        while (searching){
            if ((lhs * i)%rhs == 0){
                return lhs*i;
            }
            else{
                i++;
            }
        }
    }
    else{
        return lhs;
    }
    return -1;
}