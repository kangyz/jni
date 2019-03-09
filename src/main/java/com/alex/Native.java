package com.alex;


public class Native {
    static
    {
        try {
            NarSystem.loadLibrary();
        }catch (Throwable e){
        }
    }
}