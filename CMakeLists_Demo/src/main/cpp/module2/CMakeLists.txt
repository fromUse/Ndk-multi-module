add_library( # Sets the name of the library.
        module2

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        main.cpp)


find_library( # Sets the name of the path variable.
        log-lib

        # Specifies the name of the NDK library that
        # you want CMake to locate.
        log)

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
        module2

        # Links the target library to the log library
        # included in the NDK.
        ${log-lib})