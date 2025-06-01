namespace Course4 {
    value struct PriceRecord {
        System::String^ date;
        double monthlyTariff;
        double yearlyTariff;
        PriceRecord(System::String^ initialDate, double initialMonthlyTariff, double initialYearlyTariff) {
            date = initialDate;
            monthlyTariff = initialMonthlyTariff;
            yearlyTariff = initialYearlyTariff;
        }
    };
}