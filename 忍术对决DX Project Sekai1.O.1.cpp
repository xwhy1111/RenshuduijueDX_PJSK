#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

struct Entry {
    std::string name;
    double value;
    Entry(const std::string& n, double v) : name(n), value(v) {}
};

int randIndex(int size) {
    return std::rand() % size;
}

std::string numToStr(double v) {
    std::stringstream ss;
    ss << (long long)v;
    return ss.str();
}

std::string randDir() {
    const char* dirs[] = {"上", "下", "左", "右"};
    return dirs[std::rand() % 4];
}

bool isValidDir(const std::string& s) {
    return s == "上" || s == "下" || s == "左" || s == "右";
}

int main() {
    std::vector<Entry> numbers;
    numbers.push_back(Entry("十万", 110));
    numbers.push_back(Entry("八十万", 800));
    numbers.push_back(Entry("八十亿", 80));
    numbers.push_back(Entry("棍母", 1));
    numbers.push_back(Entry("114514", 114));
    numbers.push_back(Entry("1919810", 191));
    numbers.push_back(Entry("487", 487));
    numbers.push_back(Entry("325", 325));
    numbers.push_back(Entry("67", 67));
    numbers.push_back(Entry("91", 91));
    numbers.push_back(Entry("78", 78));
    numbers.push_back(Entry("13", 13));
    numbers.push_back(Entry("64", 640));

    std::vector<Entry> persons1;
    persons1.push_back(Entry("王璐璐", 20));
    persons1.push_back(Entry("海豹豹豹豹", 30));
    persons1.push_back(Entry("福瑞王祥子", 90));
    persons1.push_back(Entry("何少", 91));
    persons1.push_back(Entry("棍母", 1));
    persons1.push_back(Entry("电棍", 78));
    persons1.push_back(Entry("野兽先辈", 114));
    persons1.push_back(Entry("丛雨", 60));
    persons1.push_back(Entry("芳乃", 90));
    persons1.push_back(Entry("晓山瑞希", 87));
    persons1.push_back(Entry("三月七", 30));
    persons1.push_back(Entry("180", 100));
    persons1.push_back(Entry("零地婷婷", 100));
    persons1.push_back(Entry("王姥姥", 50));
    persons1.push_back(Entry("电脑王", 10));
    persons1.push_back(Entry("河童", 100));
    persons1.push_back(Entry("迪拉熊", 100));
    persons1.push_back(Entry("牛奶猫", 100));
    persons1.push_back(Entry("shama", 114));
    persons1.push_back(Entry("小猫猫猫猫", 200));
    persons1.push_back(Entry("赵一鸣", 190));
    persons1.push_back(Entry("七彩阳光光", 250));
    persons1.push_back(Entry("鸭脖万", 250));
    persons1.push_back(Entry("孔的传人", 500));
    persons1.push_back(Entry("柔情猫娘", 100));

    std::vector<Entry> places;
    places.push_back(Entry("飞八分钱", 90));
    places.push_back(Entry("你家", 90));
    places.push_back(Entry("你家长公司", 90));
    places.push_back(Entry("小巷子", 90));
    places.push_back(Entry("坟地", 1));
    places.push_back(Entry("棍母之地", 0));
    places.push_back(Entry("明德致远", 80));
    places.push_back(Entry("增产道", 60));
    places.push_back(Entry("吉利大厦", 100));
    places.push_back(Entry("舞萌机子前", 50));
    places.push_back(Entry("和平大悦城", 110));
    places.push_back(Entry("土城", 70));
    places.push_back(Entry("日报大厦14层", 85));
    places.push_back(Entry("海河", 120));
    places.push_back(Entry("河北承德东晟热力有限公司", 75));
    places.push_back(Entry("丁字沽二号路", 55));
    places.push_back(Entry("王串场二号楼", 65));
    places.push_back(Entry("光荣道", 60));
    places.push_back(Entry("万象城", 115));
    places.push_back(Entry("东南亚", 105));
    places.push_back(Entry("东京", 130));
    places.push_back(Entry("伪满洲国", 10));
    places.push_back(Entry("白宫", 150));
    places.push_back(Entry("b站", 40));

    std::vector<Entry> persons2;
    persons2.push_back(Entry("你妈", 30));
    persons2.push_back(Entry("你爸", 40));
    persons2.push_back(Entry("你姥", 54));
    persons2.push_back(Entry("你爷", 50));
    persons2.push_back(Entry("你", 100));
    persons2.push_back(Entry("你老婆", 200));
    persons2.push_back(Entry("棍母", 0));
    persons2.push_back(Entry("你老公", 150));
    persons2.push_back(Entry("你女朋友", 120));
    persons2.push_back(Entry("你男朋友", 120));
    persons2.push_back(Entry("你媳妇", 130));
    persons2.push_back(Entry("你丈夫", 140));
    persons2.push_back(Entry("你闺蜜", 80));
    persons2.push_back(Entry("你兄弟", 90));
    persons2.push_back(Entry("你七大姑", 45));
    persons2.push_back(Entry("你八大姨", 55));
    persons2.push_back(Entry("你孩子", 60));
    persons2.push_back(Entry("你精子", 10));
    persons2.push_back(Entry("你家产", 300));
    persons2.push_back(Entry("你自推", 180));
    persons2.push_back(Entry("你雷", 0));

    std::vector<Entry> actions;
    actions.push_back(Entry("大眼瞪小眼", 0));
    actions.push_back(Entry("崩屁", 1));
    actions.push_back(Entry("打嗝", 1));
    actions.push_back(Entry("倒灌", 0));
    actions.push_back(Entry("干飞马", 1));
    actions.push_back(Entry("扣比", 1));
    actions.push_back(Entry("大寺", 0));
    actions.push_back(Entry("射动漫量", 1));
    actions.push_back(Entry("大喊不缺人才", 0));

    std::srand(static_cast<unsigned int>(std::time(0)));

    std::cout << "================================" << std::endl;
    std::cout << "请选择模式：" << std::endl;
    std::cout << "1. 对战模式" << std::endl;
    std::cout << "2. Boss 模式" << std::endl;
    std::cout << "请输入 1 或 2: ";

    int mode = 1;
    std::cin >> mode;
    std::cin.ignore(1024, '\n');

    bool bossMode = (mode == 2);

    double playerHP = 5000.0;
    double enemyHP  = bossMode ? 5000000.0 : 5000.0;
    const double enemyMaxHP = bossMode ? 5000000.0 : 5000.0;

    if (bossMode) {
        std::cout << "【Boss 模式】已开启" << std::endl;
        std::cout << "Boss：羊乘亿" << std::endl;
        std::cout << "玩家抽卡伤害 = 原本 3000%" << std::endl;
        std::cout << "Boss 对玩家伤害 = 原本 10%" << std::endl;
        std::cout << "Boss 血量上限 = 5000000，溢出治疗作废" << std::endl;
    } else {
        std::cout << "【对战模式】已开启" << std::endl;
    }

    while (true) {
        std::cout << "\n================================" << std::endl;

        if (!bossMode) {
            std::cout << "要开始了呦 是否被攻击（y/n）: ";
            char dilaHit;
            std::cin >> dilaHit;
            std::cin.ignore(1024, '\n');

            if (dilaHit == 'y' || dilaHit == 'Y') {
                double rating = 0.0;
                std::cout << "请输入两个答案（每行一个）" << std::endl;
                std::string ans1, ans2;
                std::cout << "答案1: ";
                std::cin >> ans1;
                std::cin.ignore(1024, '\n');
                std::cout << "答案2: ";
                std::cin >> ans2;
                std::cin.ignore(1024, '\n');

                while (true) {
                    std::cout << "你的输入（输入“终了”结束本轮）: ";
                    std::string input;
                    std::cin >> input;
                    std::cin.ignore(1024, '\n');

                    if (input == "终了") {
                        std::cout << "本轮结束，rating = " << rating << std::endl;
                        break;
                    }

                    if (!isValidDir(input)) {
                        std::cout << "无效输入，请输入 上/下/左/右 或 终了" << std::endl;
                        continue;
                    }

                    std::string bossAns = randDir();
                    std::cout << "Boss 说出的方向是：" << bossAns << std::endl;

                    if (bossAns == ans1 || bossAns == ans2) {
                        rating += 50.0;
                        std::cout << "命中！rating +50，当前 rating = " << rating << std::endl;
                    } else {
                        double dmg = rating + 200.0;
                        std::cout << "未命中！你受到 " << dmg << " 点伤害，rating 清零" << std::endl;
                        playerHP -= dmg;
                        rating = 0.0;
                        std::cout << "当前我方血量 = " << playerHP << std::endl;
                        if (playerHP < 0) {
                            std::cout << "\n寄" << std::endl;
                            return 0;
                        }
                        break;
                    }
                }

                if (rating > 200.0) {
                    double extra = rating - 200.0;
                    enemyHP -= extra;
                    std::cout << "rating 超过 200，多余 " << extra
                              << " 点伤害由你承担" << std::endl;
                    playerHP -= extra;
                }
                std::cout << "当前我方血量 = " << playerHP << std::endl;
                std::cout << "当前敌方血量 = " << enemyHP << std::endl;

                if (playerHP < 0 || enemyHP < 0) {
                    std::cout << "\n寄" << std::endl;
                    return 0;
                }
            }
        }

        if (bossMode) {
            if (std::rand() % 100 < 30) {
                double healAmount = 1000.0 + std::rand() % 5000;
                double oldHP = enemyHP;
                enemyHP += healAmount;
                if (enemyHP > enemyMaxHP) {
                    enemyHP = enemyMaxHP;
                }
                double realHeal = enemyHP - oldHP;
                std::cout << "boss-羊乘亿回血 " << realHeal
                          << " 点（溢出 " << (healAmount - realHeal) << " 作废）" << std::endl;
            }

            Entry num    = numbers[randIndex((int)numbers.size())];
            Entry p1     = persons1[randIndex((int)persons1.size())];
            Entry place  = places[randIndex((int)places.size())];
            Entry p2     = persons2[randIndex((int)persons2.size())];
            Entry action = actions[randIndex((int)actions.size())];

            if (p1.name == "三月七") {
                p1.value = 30 + std::rand() % 51;
            }
            if (p1.name == "鸭脖万") {
                p1.value = 1 + std::rand() % 500;
            }

            double base    = p1.value * (num.value / 100.0);
            double extraP  = p2.value;
            if (extraP < 0) extraP = 0;
            double extra   = base * (extraP / 100.0);
            double total   = base + extra;
            double shield  = place.value;
            double finalDmg = total - shield;
            if (finalDmg < 0) finalDmg = 0;

            finalDmg *= 0.10;

            if (p1.name == "迪拉熊") {
                std::cout << "boss-羊乘亿抽到了迪拉熊！" << std::endl;
                std::string bossAns1 = randDir();
                std::string bossAns2 = randDir();
                while (bossAns2 == bossAns1) {
                    bossAns2 = randDir();
                }

                double rating = 0.0;
                while (true) {
                    std::cout << "请输入你的答案（输入“终了”结束）: ";
                    std::string input;
                    std::cin >> input;
                    std::cin.ignore(1024, '\n');

                    if (input == "终了") {
                        std::cout << "你选择了终了，rating = " << rating << std::endl;
                        break;
                    }

                    if (!isValidDir(input)) {
                        std::cout << "无效输入，请输入 上/下/左/右 或 终了" << std::endl;
                        continue;
                    }

                    std::cout << "Boss 的答案是：" << bossAns1 << " " << bossAns2 << std::endl;

                    if (input == bossAns1 || input == bossAns2) {
                        rating += 50.0;
                        std::cout << "命中！rating +50，当前 rating = " << rating << std::endl;
                    } else {
                        double dmg = rating + 200.0;
                        std::cout << "未命中！你受到 " << dmg << " 点伤害，rating 清零" << std::endl;
                        playerHP -= dmg;
                        rating = 0.0;
                        std::cout << "当前我方血量 = " << playerHP << std::endl;
                        if (playerHP < 0) {
                            std::cout << "\n寄" << std::endl;
                            return 0;
                        }
                        break;
                    }
                }

                if (rating > 200.0) {
                    double extra = rating - 200.0;
                    std::cout << "rating 超过 200，多余 " << extra
                              << " 点伤害由 Boss 承担" << std::endl;
                    enemyHP -= extra;
                }
                std::cout << "当前我方血量 = " << playerHP << std::endl;
                std::cout << "当前敌方血量 = " << enemyHP << std::endl;

                if (playerHP < 0 || enemyHP < 0) {
                    std::cout << "\n寄" << std::endl;
                    return 0;
                }
            }

            std::cout << "boss-羊乘亿抽卡 对你造成 " << finalDmg
                      << " 点伤害 接下来是boss抽的卡：" << std::endl;
            std::cout << "召唤" << num.name << "个" << p1.name
                      << "去" << place.name << "跟" << p2.name << action.name << std::endl;
            std::cout << "--------------------------------" << std::endl;

            playerHP -= finalDmg;
            std::cout << "当前我方血量 = " << playerHP << std::endl;
            std::cout << "当前敌方血量 = " << enemyHP << std::endl;

            if (playerHP < 0 || enemyHP < 0) {
                std::cout << "\n寄" << std::endl;
                return 0;
            }
        }

        Entry num    = numbers[randIndex((int)numbers.size())];
        Entry p1     = persons1[randIndex((int)persons1.size())];
        Entry place  = places[randIndex((int)places.size())];
        Entry p2     = persons2[randIndex((int)persons2.size())];
        Entry action = actions[randIndex((int)actions.size())];

        if (p1.name == "三月七") {
            p1.value = 30 + std::rand() % 51;
        }
        if (p1.name == "鸭脖万") {
            p1.value = 1 + std::rand() % 500;
        }

        std::cout << "\n召唤" << num.name << "个" << p1.name
                  << "去" << place.name << "跟" << p2.name << action.name << std::endl;
        std::cout << "--------------------------------" << std::endl;

        double base    = p1.value * (num.value / 100.0);
        double extraP  = p2.value;
        if (extraP < 0) extraP = 0;
        double extra   = base * (extraP / 100.0);
        double total   = base + extra;
        double shield  = place.value;
        double finalDmg = total - shield;
        if (finalDmg < 0) finalDmg = 0;

        if (bossMode) {
            finalDmg *= 30.0;
        }

        if (p1.name == "王姥姥") {
            std::cout << "【特殊】王姥姥附加：每回合20伤害，持续2回合" << std::endl;
        }
        if (p1.name == "李群爷爷") {
            std::cout << "【特殊】李群爷爷附加精神攻击：每回合+10，持续5回合" << std::endl;
        }
        if (p1.name == "孔德顺") {
            if (std::rand() % 100 < 70) {
                std::cout << "【特殊】孔德顺触发 70% 无伤害！" << std::endl;
                finalDmg = 0;
            } else {
                std::cout << "【特殊】孔德顺未触发无伤害，正常结算！" << std::endl;
            }
        }
        if (p1.name == "柔情猫娘") {
            std::cout << "【特殊】柔情猫娘：第一轮给对面加血100，之后三轮每轮给对面扣100血" << std::endl;
        }

        if (p1.name == "迪拉熊" && bossMode) {
            std::cout << "你抽到了迪拉熊！" << std::endl;
            std::cout << "请输入两个答案（每行一个）" << std::endl;
            std::string ans1, ans2;
            std::cout << "答案1: ";
            std::cin >> ans1;
            std::cin.ignore(1024, '\n');
            std::cout << "答案2: ";
            std::cin >> ans2;
            std::cin.ignore(1024, '\n');

            double rating = 0.0;
            while (true) {
                std::cout << "Boss 正在选择方向..." << std::endl;
                std::string bossAns = randDir();
                std::cout << "Boss 说出的方向是：" << bossAns << std::endl;

                if (bossAns == ans1 || bossAns == ans2) {
                    rating += 50.0;
                    std::cout << "命中！rating +50，当前 rating = " << rating << std::endl;
                } else {
                    double dmg = rating + 200.0;
                    std::cout << "未命中！Boss 受到 " << dmg << " 点伤害，rating 清零" << std::endl;
                    enemyHP -= dmg;
                    rating = 0.0;
                    std::cout << "当前敌方血量 = " << enemyHP << std::endl;
                    if (enemyHP < 0) {
                        std::cout << "\n寄" << std::endl;
                        return 0;
                    }
                    break;
                }

                std::cout << "是否继续？(y/n): ";
                char cont;
                std::cin >> cont;
                std::cin.ignore(1024, '\n');
                if (cont != 'y' && cont != 'Y') {
                    break;
                }
            }

            if (rating > 200.0) {
                double extra = rating - 200.0;
                std::cout << "rating 超过 200，多余 " << extra
                          << " 点伤害由你承担" << std::endl;
                playerHP -= extra;
            }
            std::cout << "当前我方血量 = " << playerHP << std::endl;
            std::cout << "当前敌方血量 = " << enemyHP << std::endl;

            if (playerHP < 0 || enemyHP < 0) {
                std::cout << "\n寄" << std::endl;
                return 0;
            }
        }

        if (action.value == 1) {
            std::cout << "【攻击】" << std::endl;
            std::cout << "基础伤害 = " << p1.value << " × " << num.value << "% = " << base << std::endl;
            std::cout << "附加伤害 = " << base << " × " << extraP << "% = " << extra << std::endl;
            std::cout << "总伤害   = " << total << std::endl;
            std::cout << "护盾抵扣 = " << shield << std::endl;
            std::cout << "实际伤害 = " << finalDmg << std::endl;

            enemyHP -= finalDmg;
            std::cout << "敌方剩余血量 = " << enemyHP << std::endl;
        } else {
            std::cout << "【加血】" << std::endl;
            std::cout << "恢复量   = " << p1.value << " × " << num.value << "% = " << base << std::endl;
            playerHP += base;
            std::cout << "我方恢复 " << base << " 点血量" << std::endl;
        }

        std::cout << "--------------------------------" << std::endl;
        std::cout << "当前我方血量 = " << playerHP << std::endl;
        std::cout << "当前敌方血量 = " << enemyHP << std::endl;

        if (playerHP < 0 || enemyHP < 0) {
            std::cout << "\n寄" << std::endl;
            return 0;
        }

        if (!bossMode) {
            double selfLoss;
            std::cout << "请输入本回合你自己扣除的血量: ";
            std::cin >> selfLoss;
            std::cin.ignore(1024, '\n');

            playerHP -= selfLoss;
            std::cout << "扣除后我方剩余血量 = " << playerHP << std::endl;

            if (playerHP < 0 || enemyHP < 0) {
                std::cout << "\n寄" << std::endl;
                return 0;
            }
        }

        std::cout << "\n按回车进入下一回合...";
        std::cin.get();
        system(CLEAR_SCREEN);
    }

    return 0;
}
