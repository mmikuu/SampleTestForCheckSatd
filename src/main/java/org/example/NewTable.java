package org.example;

public class NewTable {


    public void setI(int j) {
        for (int i = 0; i < 5; i++) {
            System.out.println("Count: " + i);
        }
        System.out.println("Hello, world!");
    }

    //XXX should I have to do that? If this is not done, then the colors don't appear --> bug of #setVisibleRegion ? --> See \"1GHQC7Q: ITPUI:WIN2000 - TextViewer#setVisibleRegion doesn't take into account the colors\"

}
