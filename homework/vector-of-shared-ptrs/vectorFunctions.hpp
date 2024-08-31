#pragma once
#include <vector>
#include <memory>

std::vector<std::shared_ptr<int>> generate (const int count);
void print (std::vector<std::shared_ptr<int>> vector);