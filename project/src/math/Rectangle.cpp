#include <math/Rectangle.h>


namespace lime {
	
	
	static int id_height;
	static int id_width;
	static int id_x;
	static int id_y;
	static bool init = false;
	
	
	Rectangle::Rectangle () {
		
		height = 0;
		width = 0;
		x = 0;
		y = 0;
		
	}
	
	
	Rectangle::Rectangle (double x, double y, double width, double height) {
		
		this->height = height;
		this->width = width;
		this->x = x;
		this->y = y;
		
	}
	
	
	Rectangle::Rectangle (value rect) {
		
		if (!init) {
			
			id_height = val_id ("height");
			id_width = val_id ("width");
			id_x = val_id ("x");
			id_y = val_id ("y");
			init = true;
			
		}
		
		width = val_number (val_field (rect, id_width));
		height = val_number (val_field (rect, id_height));
		x = val_number (val_field (rect, id_x));
		y = val_number (val_field (rect, id_y));
		
	}
	
	
}