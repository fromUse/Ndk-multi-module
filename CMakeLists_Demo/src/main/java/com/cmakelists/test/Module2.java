package com.cmakelists.test;

public class Module2 {
    static {
        System.loadLibrary("module2");
    }
    public native static String test();
}
