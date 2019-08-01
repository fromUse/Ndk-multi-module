cmake_minimum_required(VERSION 3.4.1)

#添加子目录，将自动找到子目录中的CMakeLists.txt
ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/src/main/cpp/module1/)
ADD_SUBDIRECTORY(${PROJECT_SOURCE_DIR}/src/main/cpp/module2/)
