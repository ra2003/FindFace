//
// Created by Сергей Петренко on 2019-12-02.
//

#ifndef CPPROJECT_PERSONVIEW_H
#define CPPROJECT_PERSONVIEW_H

#include "View/View.h"
#include "ImageView/ImageView.h"
#include "TextView/TextView.h"
#include "TableView/TableView.h"


class PersonView: public View {
public:
    const int cellCount = 3;
    const int rowsCount = 1;
    const int imageHeight = 256;
    const int imageWidth = 256;
    ImageView* userImage;
    TextView* username;
    TableView* infoTable;

    PersonView(UserData userData);

private:
    void makeTemplate();
};


#endif //CPPROJECT_PERSONVIEW_H
