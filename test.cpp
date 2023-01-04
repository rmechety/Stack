
#include <gtest/gtest.h>

#include "MyStack.hpp"

// Test Front A avec stack A de taille 1 :
//     Entree :
//         StackA : [1]
//         StackB : [1,2,3]
//     Operations:
//         front_a
//     Resultat Attendu:
//          front_a() == 1

TEST(FrontA, StackASize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({1, 2, 3});
  EXPECT_EQ(stack.front_a(), 1);
}

// Test Front A avec stack A de taille 4 :
//     Entree :
//         StackA : [1,2,3,4]
//         StackB : [1,2,3]
//     Operations:
//         front_a
//     Resultat Attendu:
//          front_a() == 1

TEST(FrontA, StackASize4) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3, 4});
  stack.set_stack_b({1, 2, 3});
  EXPECT_EQ(stack.front_a(), 1);
}

// Test Front A avec stack A vide :
//     Entree :
//         StackA : []
//         StackB : [1,2,3]
//     Operations:
//         front_a
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(FrontA, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({1, 2, 3});
  EXPECT_THROW(stack.front_a(), StackEmpty);
}

// Test Front A avec stack A de taille 1 et stack B vide :
//     Entree :
//         StackA : [1]
//         StackB : []
//     Operations:
//         front_a
//     Resultat Attendu:
//          front_a() == 1

TEST(FrontA, StackASize1StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({});
  EXPECT_EQ(stack.front_a(), 1);
}

// Test Front A avec stack A de taille 2 :
//     Entree :
//         StackA : [1,2]
//         StackB : [1,2,3]
//     Operations:
//         front_a
//     Resultat Attendu:
//          front_a() == 1

TEST(FrontA, StackASize2) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({1, 2, 3});
  EXPECT_EQ(stack.front_a(), 1);
}

// Test Back A avec stack A de taille 2 :
//     Entree :
//         StackA : [1,2]
//         StackB : [1,2,3]
//     Operations:
//         back_a
//     Resultat Attendu:
//          back_a() == 2

TEST(BackA, StackASize2) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({1, 2, 3});
  EXPECT_EQ(stack.back_a(), 2);
}

// Test Back A avec stack A de taille 4 :
//     Entree :
//         StackA : [1,2,3,4]
//         StackB : [1,2,3]
//     Operations:
//         back_a
//     Resultat Attendu:
//          back_a() == 4

TEST(BackA, StackASize4) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3, 4});
  stack.set_stack_b({1, 2, 3});
  EXPECT_EQ(stack.back_a(), 4);
}

// Test Back A avec stack A vide :
//     Entree :
//         StackA : []
//         StackB : [1,2,3]
//     Operations:
//         back_a
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(BackA, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({1, 2, 3});
  EXPECT_THROW(stack.back_a(), StackEmpty);
}

// Test Back A avec stack A de taille 1 et stack B vide :
//     Entree :
//         StackA : [1]
//         StackB : []
//     Operations:
//         back_a
//     Resultat Attendu:
//          back_a() == 1

TEST(BackA, StackASize1StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({});
  EXPECT_EQ(stack.back_a(), 1);
}

// Test Back A avec stack A de taille 1 :
//     Entree :
//         StackA : [1]
//         StackB : [1,2,3]
//     Operations:
//         back_a
//     Resultat Attendu:
//          back_a() == 1

TEST(BackA, StackASize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({1, 2, 3});
  EXPECT_EQ(stack.back_a(), 1);
}

// Front B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4]
//     Operations:
//         front_b
//     Resultat Attendu:
//          front_b() == 4

TEST(FrontB, StackBSize1) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4});
  EXPECT_EQ(stack.front_b(), 4);
}

// Front B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5,6,7]
//     Operations:
//         front_b
//     Resultat Attendu:
//          front_b() == 4

TEST(FrontB, StackBSize4) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5, 6, 7});
  EXPECT_EQ(stack.front_b(), 4);
}

// Front B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : []
//     Operations:
//         front_b
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(FrontB, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({});
  EXPECT_THROW(stack.front_b(), StackEmpty);
}

// Front B :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         front_b
//     Resultat Attendu:
//          front_b() == 4

TEST(FrontB, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_EQ(stack.front_b(), 4);
}

// Front B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5]
//     Operations:
//         front_b
//     Resultat Attendu:
//          front_b() == 4

TEST(FrontB, StackBSize2) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5});
  EXPECT_EQ(stack.front_b(), 4);
}

// Back B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4]
//     Operations:
//         back_b
//     Resultat Attendu:
//          back_b() == 4

TEST(BackB, StackBSize1) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4});
  EXPECT_EQ(stack.back_b(), 4);
}

// Back B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5,6,7]
//     Operations:
//         back_b
//     Resultat Attendu:
//          back_b() == 7

TEST(BackB, StackBSize4) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5, 6, 7});
  EXPECT_EQ(stack.back_b(), 7);
}

// Back B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : []
//     Operations:
//         back_b
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(BackB, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({});
  EXPECT_THROW(stack.back_b(), StackEmpty);
}

// Back B :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         back_b
//     Resultat Attendu:
//          back_b() == 4

TEST(BackB, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_EQ(stack.back_b(), 4);
}

// Back B :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5]
//     Operations:
//         back_b
//     Resultat Attendu:
//          back_b() == 5

TEST(BackB, StackBSize2) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5});
  EXPECT_EQ(stack.back_b(), 5);
}

// SA :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         sa
//     Resultat Attendu:
//         Exception StackTooShort lancee

TEST(SA, StackASize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.sa(), StackTooShort);
}

// SA :
//     Entree :
//         StackA : [1,2]
//         StackB : [4]
//     Operations:
//         sa
//     Resultat Attendu:
//         StackA : [2,1]
//         StackB : [4]

TEST(SA, StackASize2) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({4});
  stack.sa();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2, 1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({4}));
}

// SA :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         sa
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(SA, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.sa(), StackEmpty);
}

// SA :
//     Entree :
//         StackA : [1]
//         StackB : []
//     Operations:
//         sa
//     Resultat Attendu:
// 			Exception StackTooShort lancee

TEST(SA, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({});
  EXPECT_THROW(stack.sa(), StackTooShort);
}

// SA :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5]
//     Operations:
//         sa
//     Resultat Attendu:
//         StackA : [2,1,3]
//         StackB : [4,5]

TEST(SA, StackASize3) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5});
  stack.sa();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2, 1, 3}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({4, 5}));
}

// SB :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         sb
//     Resultat Attendu:
//         Exception StackTooShort lancee

TEST(SB, StackBSize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.sb(), StackTooShort);
}

// SB :
//     Entree :
//         StackA : [1]
//         StackB : [4,5]
//     Operations:
//         sb
//     Resultat Attendu:
//         StackA : [1]
//         StackB : [5,4]

TEST(SB, StackBSize2) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4, 5});
  stack.sb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 4}));
}

// SB :
//     Entree :
//         StackA : [1,2,3]
//         StackB : []
//     Operations:
//         sb
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(SB, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({});
  EXPECT_THROW(stack.sb(), StackEmpty);
}

// SB :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         sb
//     Resultat Attendu:
//         Exception StackTooShort lancee

TEST(SB, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.sb(), StackTooShort);
}

// SB :
//     Entree :
//         StackA : [1,2]
//         StackB : [4,5,6]
//     Operations:
//         sb
//     Resultat Attendu:
//         StackA : [1,2]
//         StackB : [5,4,6]

TEST(SB, StackBSize3) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({4, 5, 6});
  stack.sb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({1, 2}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 4, 6}));
}

// PA :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         pa
//     Resultat Attendu:
//         StackA : []
//         StackB : [1,4]

TEST(PA, StackASize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  stack.pa();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({1, 4}));
}

// PA :
//     Entree :
//         StackA : [1,2]
//         StackB : [4]
//     Operations:
//         pa
//     Resultat Attendu:
//         StackA : [2]
//         StackB : [1,4]

TEST(PA, StackASize2) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({4});
  stack.pa();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({1, 4}));
}

// PA :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         pa
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(PA, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.pa(), StackEmpty);
}

// PA :
//     Entree :
//         StackA : [1]
//         StackB : []
//     Operations:
//         pa
//     Resultat Attendu:
//         StackA : []
//         StackB : [1]

TEST(PA, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({});
  stack.pa();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({1}));
}

// PA :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5]
//     Operations:
//         pa
//     Resultat Attendu:
//         StackA : [2,3]
//         StackB : [1,4,5]

TEST(PA, StackASize3) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5});
  stack.pa();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2, 3}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({1, 4, 5}));
}

// PB :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         pb
//     Resultat Attendu:
//         StackA : [4,1]
//         StackB : []

TEST(PB, StackBSize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  stack.pb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({4, 1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({}));
}

// PB :
//     Entree :
//         StackA : [1,2]
//         StackB : [4]
//     Operations:
//         pb
//     Resultat Attendu:
//         StackA : [4,1,2]
//         StackB : []

TEST(PB, StackASize2) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({4});
  stack.pb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({4, 1, 2}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({}));
}

// PB :
//     Entree :
//         StackA : [1,2,3]
//         StackB : []
//     Operations:
//         pb
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(PB, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({});
  EXPECT_THROW(stack.pb(), StackEmpty);
}

// PB :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         pb
//     Resultat Attendu:
//         StackA : [4]
//         StackB : []

TEST(PB, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  stack.pb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({4}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({}));
}

// PB :
//     Entree :
//         StackA : [1]
//         StackB : [4,5,6]
//     Operations:
//         pb
//     Resultat Attendu:
//         StackA : [4,1]
//         StackB : [5,6]

TEST(PB, StackBSize3) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4, 5, 6});
  stack.pb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({4, 1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 6}));
}

// RA :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         ra
//     Resultat Attendu:
// 		Exception StackTooShort lancee

TEST(RA, StackASize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.ra(), StackTooShort);
}

// RA :
//     Entree :
//         StackA : [1,2]
//         StackB : [4]
//     Operations:
//         ra
//     Resultat Attendu:
//         StackA : [2,1]
//         StackB : [4]

TEST(RA, StackASize2) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({4});
  stack.ra();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2, 1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({4}));
}

// RA :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4]
//     Operations:
//         ra
//     Resultat Attendu:
//         StackA : [2,3,1]
//         StackB : [4]

TEST(RA, StackASize3) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4});
  stack.ra();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2, 3, 1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({4}));
}

// RA :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         ra
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(RA, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.ra(), StackEmpty);
}

// RA :
//     Entree :
//         StackA : [1,2,3,4]
//         StackB : [5,6]
//     Operations:
//         ra
//     Resultat Attendu:
//         StackA : [2,3,4,1]
//         StackB : [5,6]

TEST(RA, StackASize4) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3, 4});
  stack.set_stack_b({5, 6});
  stack.ra();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2, 3, 4, 1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 6}));
}

// RB :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         rb
//     Resultat Attendu:
// 		Exception StackTooShort lancee

TEST(RB, StackBSize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.rb(), StackTooShort);
}

// RB :
//     Entree :
//         StackA : [1]
//         StackB : [4,5]
//     Operations:
//         rb
//     Resultat Attendu:
//         StackA : [1]
//         StackB : [5,4]

TEST(RB, StackBSize2) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4, 5});
  stack.rb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 4}));
}

// RB :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5,6]
//     Operations:
//         rb
//     Resultat Attendu:
//         StackA : [1,2,3]
//         StackB : [5,6,4]

TEST(RB, StackBSize3) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5, 6});
  stack.rb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({1, 2, 3}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 6, 4}));
}

// RB :
//     Entree :
//         StackA : [1,2]
//         StackB : []
//     Operations:
//         rb
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(RB, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({});
  EXPECT_THROW(stack.rb(), StackEmpty);
}

// RB :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         rb
//     Resultat Attendu:
// 		Exception StackTooShort lancee

TEST(RB, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.rb(), StackTooShort);
}

// RRA :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         rra
//     Resultat Attendu:
// 		Exception StackTooShort lancee

TEST(RRA, StackASize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.rra(), StackTooShort);
}

// RRA :
//     Entree :
//         StackA : [1,2]
//         StackB : [4]
//     Operations:
//         rra
//     Resultat Attendu:
//         StackA : [1,2]
//         StackB : [4]

TEST(RRA, StackASize2) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({4});
  stack.rra();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({2, 1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({4}));
}

// RRA :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4]
//     Operations:
//         rra
//     Resultat Attendu:
//         StackA : [3,1,2]
//         StackB : [4]

TEST(RRA, StackASize3) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4});
  stack.rra();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({3, 1, 2}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({4}));
}

// RRA :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         rra
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(RRA, StackAEmpty) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.rra(), StackEmpty);
}

// RRA :
//     Entree :
//         StackA : [1,2,3,4]
//         StackB : [5,6]
//     Operations:
//         rra
//     Resultat Attendu:
//         StackA : [4,1,2,3]
//         StackB : [5,6]

TEST(RRA, StackASize4) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3, 4});
  stack.set_stack_b({5, 6});
  stack.rra();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({4, 1, 2, 3}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 6}));
}

// 		RRB :
//     Entree :
//         StackA : [1]
//         StackB : [4]
//     Operations:
//         rrb
//     Resultat Attendu:
//       Exception StackTooShort lancee

TEST(RRB, StackBSize1) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.rrb(), StackTooShort);
}

// RRB :
//     Entree :
//         StackA : [1]
//         StackB : [4,5]
//     Operations:
//         rrb
//     Resultat Attendu:
//         StackA : [1]
//         StackB : [5,4]

TEST(RRB, StackBSize2) {
  MyStack stack;
  stack.set_stack_a({1});
  stack.set_stack_b({4, 5});
  stack.rrb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({1}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({5, 4}));
}

// RRB :
//     Entree :
//         StackA : [1,2,3]
//         StackB : [4,5,6]
//     Operations:
//         rrb
//     Resultat Attendu:
//         StackA : [1,2,3]
//         StackB : [6,4,5]

TEST(RRB, StackBSize3) {
  MyStack stack;
  stack.set_stack_a({1, 2, 3});
  stack.set_stack_b({4, 5, 6});
  stack.rrb();
  EXPECT_EQ(stack.get_stack_a(), std::list<int>({1, 2, 3}));
  EXPECT_EQ(stack.get_stack_b(), std::list<int>({6, 4, 5}));
}

// RRB :
//     Entree :
//         StackA : [1,2]
//         StackB : []
//     Operations:
//         rrb
//     Resultat Attendu:
//         Exception StackEmpty lancee

TEST(RRB, StackBEmpty) {
  MyStack stack;
  stack.set_stack_a({1, 2});
  stack.set_stack_b({});
  EXPECT_THROW(stack.rrb(), StackEmpty);
}

// RRB :
//     Entree :
//         StackA : []
//         StackB : [4]
//     Operations:
//         rrb
//     Resultat Attendu:
// 		Exception StackEmpty lancee

TEST(RRB, StackBEmpty2) {
  MyStack stack;
  stack.set_stack_a({});
  stack.set_stack_b({4});
  EXPECT_THROW(stack.rrb(), StackTooShort);
}

int main(int argc, char const *argv[]) {
  ::testing::InitGoogleTest(&argc, const_cast<char **>(argv));
  return RUN_ALL_TESTS();

  return 0;
}
