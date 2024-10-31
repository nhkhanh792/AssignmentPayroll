#ifndef PAYROLLABSTRACT_H
#define PAYROLLABSTRACT_H

// khoi tao cac ham abstract
double caculate_cpp(double income, int pay_periods, double ytd_cpp);

double caculate_ei(double income, double ytd_ei);

double calculate_federal_tax(double income, double rpp, double union_dues, double federal_credits, double pay_periods, double lssp, double cpp, double ei, double ad);

double caculate_provincial_tax(double income, double rpp, double union_dues, double pay_periods, double provincial_credits, double dependants, double lssp, double cpp, double ei, double ad);

// hàm tính tổng thu thuế khấu trừ
double calculate_total_deductions(double rpp, double union_dues, double federal_tax, double provincial_tax, double cpp, double ei);
// hàm tính thu nhập ròng
double calculate_net_income(double income, double total_deductions);

#endif