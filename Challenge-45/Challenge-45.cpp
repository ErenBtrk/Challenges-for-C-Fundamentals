#include <iostream>

using namespace std;

class Point{
private:
    float x,y;
public:
    Point(float x,float y){
        this->x=x;
        this->y=y;
    }
    void displayCoords(){
        cout << x << "," << y << endl;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
};

class Rectangle{
private:
    float top;
    float bottom;
    float right;
    float left;
public:
    void areaPeri(float *aa,float *pp){
        float area,perimeter;

        *aa=(right-left)*(top-bottom);
        *pp=2*((top-bottom)+(right-left));
    }
    Point topLeft(){
        Point topLeftPt(left,top);
        return topLeftPt;
    }
    Point bottomRight(){
        Point bottomRightPt(right,bottom);
        return bottomRightPt;
    }
    Point centerPoint(){
        float x,y,height,width;

        height=bottom-top;
        width=right-left;
        x=top+height/2;
        y=left+width/2;
        Point center(x,y);

        return center;
    }
    void deflateRect(float y,float x){
        // Decrease size of rectangle equally from all sides
        // After deflateRect( ), center remains same
        top=top+y/2;
        bottom=bottom-y/2;
        left=left+x/2;
        right=right-x/2;

    }
    void inflateRect(float y,float x){
        // Increase size of rectangle equally from all sides
        // After inflateRect( ), center remains same
        top=top-y/2;
        bottom=bottom+y/2;
        left=left-x/2;
        right=right+x/2;
    }

    bool equalRect(Rectangle otherRect){
        float height1,height2,width1,width2;

        height1=bottom-top;
        height2=otherRect.bottom-otherRect.top;
        width1=right-left;
        width2=otherRect.right-otherRect.left;
            if(((height1 == height2)&& (width1 == width2)) ||
               ((height1 == width2) && (width1 == width2)))
                return true;
            else{
                return false;
            }
    }

    float height(){
        return bottom-top;
    }

    float width(){
        return right-left;
    }

    bool isRectEmpty(){
        float height,width;

        height=top-bottom;
        width=right-left;

        if(height == 0 ||width == 0){
            return true;
        }
        else{
            return false;
        }
    }

    bool isRectNull(){
        if(top==0 && bottom==0 && right==0 && left==0){
            return true;
        }
        else{
            return false;
        }
    }

    bool ptInRect(Point pt){
        float xCoord=pt.getX();
        float yCoord=pt.getY();
            if(yCoord>top && yCoord<bottom && xCoord>left && xCoord<right){
                return true;
            }
            else{
                return false;
            }
    }

    void setRect(float y1,float y2,float x1,float x2){
        if(y1<=y2 && x1<=x2){
            top=y1;
            bottom=y2;
            left=x1;
            right=x2;
        }
        else{
            cout << "Invalid coordinates" << endl;
        }
    }

    void setRectEmpty(){
        top=bottom=right=left=0;
    }

    void intersectRect(Rectangle rect1,Rectangle rect2){
        //Check whether the given two rectangles are intersecting
        if(rect1.right > rect2.left && rect1.left < rect2.right &&
           rect1.top < rect2.bottom && rect1.bottom > rect2.top){
            top=max(rect1.top,rect2.top);
            bottom=min(rect1.bottom,rect2.bottom);
            left=max(rect1.left,rect2.left);
            right=min(rect1.right,rect2.right);
        }
        else{
            cout << "Non-intersection rectangles entered" << endl;
        }
    }

    void unionRect(Rectangle rect1,Rectangle rect2){
        if(rect1.top == rect2.top && rect1.bottom == rect2.bottom){
            top=rect1.top;
            bottom=rect1.bottom;
            left=min(rect1.left,rect2.left);
            right=max(rect1.right,rect2.right);
        }
        else{
            cout << "Union is not a rectangle" << endl;
        }
    }

};

float min(float n1,float n2){
    return (n1<=n2 ? n1 : n2);
}

float max(float n1,float n2){
    return (n1>=n2 ? n1 : n2);
}


int main(){
    Rectangle r1, r2, r3, r4 ;
    float area, perimeter ;

    r1.setRect ( 1, 3, 1, 3 ) ;
    r2.setRect ( 1, 3, 1.5, 3.5 ) ;

    r1.areaPeri ( &area, &perimeter ) ;
    cout << "Area = " << area << endl ;
    cout << "Perimeter = " << perimeter << endl ;

    Point topleftpoint = r1.topLeft( ) ;
    Point bottomrightpoint = r1.bottomRight( ) ;
    Point center = r1.centerPoint( ) ;
    cout << "Top Left : " << endl ;
    topleftpoint.displayCoords( ) ;
    cout << "Bottom Right : " << endl ;
    bottomrightpoint.displayCoords( ) ;
    cout << "Center : " << endl ;
    center.displayCoords( ) ;

    bool equal = r1.equalRect ( r2 ) ;
    cout << "Equality : " << equal << endl ;

    float h = r1.height( ) ;
    float w = r1.width( ) ;
    cout << "Height : " << h << endl ;

    cout << "Width : " << w << endl ;

    bool empty = r1.isRectEmpty( ) ;
    cout << "Empty : " << empty << endl ;

    bool null = r1.isRectNull( ) ;
    cout << "Null : " << null << endl ;

    Point point1 ( 2, 1.5 ), point2 ( 0.5, 0.5 ) ;
    bool point1bool = r1.ptInRect ( point1 ) ;
    bool point2bool = r1.ptInRect ( point2 ) ;
    cout << "Point 1 in Rectangle : " << point1bool << endl ;
    cout << "Point 2 in Rectangle : " << point2bool << endl ;

    r3.intersectRect ( r1, r2 ) ;
    Point r3topleft = r3.topLeft( ) ;
    cout << "Top Left of Intersection : " << endl ;
    r3topleft.displayCoords( ) ;
    Point r3bottomright = r3.bottomRight( ) ;
    cout << "Bottom Right of Intersection : " << endl ;
    r3bottomright.displayCoords( ) ;

    r4.unionRect ( r1, r2 ) ;
    Point r4topleft = r4.topLeft( ) ;
    cout << "Top Left of Union : " << endl ;
    r4topleft.displayCoords( ) ;
    Point r4bottomright = r4.bottomRight( ) ;
    cout << "Bottom Right of Union : " << endl ;
    r4bottomright.displayCoords( ) ;

    r1.inflateRect ( 1,1 ) ;
    topleftpoint = r1.topLeft( ) ;
    bottomrightpoint = r1.bottomRight( ) ;
    center = r1.centerPoint( ) ;
    cout << "Top Left : " << endl ;
    topleftpoint.displayCoords( ) ;
    cout << "Bottom Right : " << endl ;
    bottomrightpoint.displayCoords( ) ;
    cout << "Center : " << endl ;
    center.displayCoords( ) ;

    r1.deflateRect ( 1,1 ) ;
    topleftpoint = r1.topLeft( ) ;
    bottomrightpoint = r1.bottomRight( ) ;
    center = r1.centerPoint( ) ;
    cout << "Top Left : " << endl ;
    topleftpoint.displayCoords( ) ;
    cout << "Bottom Right : " << endl ;
    bottomrightpoint.displayCoords( ) ;
    cout << "Center : " << endl ;
    center.displayCoords( ) ;





	return 0;
}
