#include "GridItem.hpp"

class Interactable : public GridItem {
    public:
        enum InteractableType {
            GOAL,
            EXPERIMENT
        };

        Interactable::Interactable(int x, int y, int width, int height):
        Coordinates(make_pair){

        }
        bool interact(Scientist* player);
        InteractableType getType(){
            return player;
        }




};