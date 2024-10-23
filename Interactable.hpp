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
        virtual bool interact(Scientist* player){
             InteractableType(player) = 0
        }

        InteractableType getType(){
            return 
        }





};