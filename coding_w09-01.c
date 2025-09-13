#include <stdio.h>

int main() {
    int start, stop;
    while (1) {
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);
    printf("start number is %d and stop number %d\n", start, stop);
    printf("---------------\n");
    if (start == stop) {
    printf("Your Start number is equal to Stop number, please try again!\n\n");
    continue; 
    } else if (start > stop) {
    printf("Your Start number is greater than Stop number, please try again!\n\n");
    continue; 
    } else {
    printf("Sequence from start to stop:");
    while (start <= stop) {
    printf("%d ", start);
    start++;
    }
    break; 
    }
    }
    printf("\nThank you.\n");
    return 0;
}

/*
บรรทัดที่ 4 ประกาศตัวแปร start, stop
บรรทัดที่ 5 วนลูปไม่สิ้นสุดจนกว่าจะเจอ break
บรรทัดที่ 6 แสดงข้อความ 
บรรทัดที่ 7 รับค่าตัวเลขเริ่มต้นจากผู้ใช้
บรรทัดที่ 8 แสดงข้อความ 
บรรทัดที่ 9 รับค่าตัวเลขเริ่มต้นจากผู้ใช้
บรรทัดที่ 10 แสดงค่าที่ผู้ใช้กรอกเข้ามา
บรรทัดที่ 12 กรณีที่ start=stop 
บรรทัดที่ 13 แสดงข้อความ 
บรรทัดที่ 14 กลับไปเริ่มลูปรับค่าใหม่
บรรทัดที่ 15 กรณีที่ start>stop 
บรรทัดที่ 16 แสดงข้อความ 
บรรทัดที่ 17 กลับไปเริ่มลูปรับค่าใหม่
บรรทัดที่ 18 กรณีที่ start<stop เป็นจริง
บรรทัดที่ 19 แสดงข้อความ 
บรรทัดที่ 20 ลูปจะทำงานต่อเมื่อ start<=stop เป็นจริง
บรรทัดที่ 21 แสดงผลลัพธ์ค่าปัจจุบันของ start
บรรทัดที่ 22 เพิ่มค่าของ start ขึ้นทีละ 1
บรรทัดที่ 24 ออกจาก loop
บรรทัดที่ 27 แสดงข้อความ 
บรรทัดที่ 28 จบการทำงานของโปรแกรม

*/