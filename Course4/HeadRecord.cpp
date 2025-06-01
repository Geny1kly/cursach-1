namespace Course4 {
    struct Head_Record {
        char tariff_plan[20];
        float topic_price;
        char discount[20];
        char period_plan[50];
        char name_owner[100];
        int id_account;
        char eic_code[40];
        char adr_oblast[50];
        char adr_city[30];
        char adr_address[50];
        char adr_home[20];
        char subsides[5];
        float overpay;
        char date_overpay[20];
        char status[20];
    };
}