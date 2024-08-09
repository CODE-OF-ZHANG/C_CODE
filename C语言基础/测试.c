#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1() {
    int health = 100; // 玩家的生命值
    int gold = 50; // 玩家的金币
    int enemy_health = 75; // 敌人的生命值
    int choice; // 玩家的选择

    srand((unsigned int)time(NULL)); // 初始化随机数生成器

    printf("欢迎来到文字冒险游戏！\n");
    printf("你现在的生命值是：%d，金币是：%d\n", health, gold);

    while (health > 0 && enemy_health > 0) {
        int damage, enemy_damage; // 将变量定义提到 switch 语句外
        printf("\n请选择你的行动：\n");
        printf("1. 攻击敌人\n");
        printf("2. 逃跑\n");
        printf("3. 购买装备\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1: // 攻击敌人
            damage = rand() % 10 + 1; // 随机生成1-10之间的伤害值
            enemy_health -= damage;
            printf("你攻击了敌人，造成了%d点伤害。敌人的生命值现在是：%d\n", damage, enemy_health);
            if (enemy_health <= 0) {
                printf("你击败了敌人！获得25金币。\n");
                gold += 25;
                break;
            }
            enemy_damage = rand() % 10 + 1; // 敌人随机反击
            health -= enemy_damage;
            printf("敌人反击，你受到了%d点伤害。你的生命值现在是：%d\n", enemy_damage, health);
            if (health <= 0) {
                printf("你被敌人击败了！游戏结束。\n");
                return 0;
            }
            break;
        case 2: // 逃跑
            printf("你选择了逃跑，游戏结束。\n");
            return 0;
        case 3: // 购买装备
            if (gold >= 20) {
                printf("你花费20金币购买了一件装备，生命值+10。\n");
                health += 10;
                gold -= 20;
            }
            else {
                printf("你没有足够的金币购买装备。\n");
            }
            break;
        default:
            printf("无效的选择，请重新选择。\n");
            break;
        }
    }

    if (health <= 0) {
        printf("游戏结束，你失败了。\n");
    }
    else {
        printf("游戏结束，你赢了！\n");
    }

    return 0;
}