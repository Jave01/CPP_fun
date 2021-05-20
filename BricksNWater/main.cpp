#include <iostream>
#include <vector>

class WaterSpace
{
private:
    std::vector<int> m_Bricks;
    int m_MaxHeight = 0;

public:
    WaterSpace(std::vector<int> &BricksInput);
    WaterSpace(int* BrickArray, int arr_size);
    ~WaterSpace();
    int GetMaxHeight();
    void UpdateMaxHeight();
};



int main()
{

}


WaterSpace::WaterSpace(std::vector<int> &BricksInput)
{
    for(int i = 0; i < BricksInput.size(); i++)
        this->m_Bricks.push_back(BricksInput[i]);
}

WaterSpace::WaterSpace(int* BrickArray, int arr_size)
{
    for(int i = 0; i < arr_size; i++)
        this->m_Bricks.push_back(BrickArray[i]);
}

WaterSpace::~WaterSpace()
{
}


int WaterSpace::GetMaxHeight()
{

}

void WaterSpace::UpdateMaxHeight()
{

}