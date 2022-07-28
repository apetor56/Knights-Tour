#ifndef DATA_HPP
#define DATA_HPP

//-------------------------------------------------------------//
//-------------------- data send to buffers -------------------//
//-------------------------------------------------------------//

float vertices[] {
      /*  position  */    /*  color */
    -0.5f, -0.5f, 0.0f, 0.5f, 0.0f, 0.4f,
    -0.5f,  0.5f, 0.0f, 0.3f, 0.1f, 0.4f,
     0.5f,  0.5f, 0.0f, 0.5f, 0.5f, 0.1f,
     0.5f, -0.5f, 0.0f, 0.1f, 0.9f, 0.3f
};

unsigned int indices[] {
    0, 1, 2,
    2, 3, 0
};

#endif // DATA_HPP