#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1() {
    int health = 100; // ��ҵ�����ֵ
    int gold = 50; // ��ҵĽ��
    int enemy_health = 75; // ���˵�����ֵ
    int choice; // ��ҵ�ѡ��

    srand((unsigned int)time(NULL)); // ��ʼ�������������

    printf("��ӭ��������ð����Ϸ��\n");
    printf("�����ڵ�����ֵ�ǣ�%d������ǣ�%d\n", health, gold);

    while (health > 0 && enemy_health > 0) {
        int damage, enemy_damage; // �����������ᵽ switch �����
        printf("\n��ѡ������ж���\n");
        printf("1. ��������\n");
        printf("2. ����\n");
        printf("3. ����װ��\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1: // ��������
            damage = rand() % 10 + 1; // �������1-10֮����˺�ֵ
            enemy_health -= damage;
            printf("�㹥���˵��ˣ������%d���˺������˵�����ֵ�����ǣ�%d\n", damage, enemy_health);
            if (enemy_health <= 0) {
                printf("������˵��ˣ����25��ҡ�\n");
                gold += 25;
                break;
            }
            enemy_damage = rand() % 10 + 1; // �����������
            health -= enemy_damage;
            printf("���˷��������ܵ���%d���˺����������ֵ�����ǣ�%d\n", enemy_damage, health);
            if (health <= 0) {
                printf("�㱻���˻����ˣ���Ϸ������\n");
                return 0;
            }
            break;
        case 2: // ����
            printf("��ѡ�������ܣ���Ϸ������\n");
            return 0;
        case 3: // ����װ��
            if (gold >= 20) {
                printf("�㻨��20��ҹ�����һ��װ��������ֵ+10��\n");
                health += 10;
                gold -= 20;
            }
            else {
                printf("��û���㹻�Ľ�ҹ���װ����\n");
            }
            break;
        default:
            printf("��Ч��ѡ��������ѡ��\n");
            break;
        }
    }

    if (health <= 0) {
        printf("��Ϸ��������ʧ���ˡ�\n");
    }
    else {
        printf("��Ϸ��������Ӯ�ˣ�\n");
    }

    return 0;
}