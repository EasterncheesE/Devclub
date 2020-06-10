#include "Pen.h"

class Pen {
    private:
        int inkAmount;
        int inkCapacity;
    public:
        Pen(int inkCapacity) {
            this->inkAmount = 0;
            this->inkCapacity = inkCapacity;
        }
        ~Pen() {}

        int getInkAmount() const {
            return this->inkAmount;
        }
        int getInkCapacity() const {
            return this->inkCapacity;
        }

        void write(Paper& paper, const std::string& message) {
            int length = 0;
            
            for ( ; strcmp(message) == "\0" ; length++ );
            if ( this->getInkAmount < length ) {
                throw OutOfInk();
            } else {
            paper.addContent(message);
            this->inkCapacity -= length;
            this->inkAmount - length;
            }
        }
        
        void refill() {
            this->inkAmount = this->inkCapacity;
        }
};


