package com.mkbuild.test;

public class Module1 {
    static {
        System.loadLibrary("module1");
    }

    public native static String test();
}
