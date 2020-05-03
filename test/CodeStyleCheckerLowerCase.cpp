// RUN: clang -cc1 -verify -load %shlibdir/libCodeStyleChecker%shlibext -plugin code-style-checker %s 2>&1

// Verify that function names starting with upper case are reported as invalid

// expected-warning@+1 {{Function names should start with lower-case letter}}
void ClangTutorBad();

void clangTutorOK();

struct SomeClass {
  // expected-warning@+1 {{Function names should start with lower-case letter}}
  void ClangTutorMemberMethodBad();

  void clangTutorMemberMethodOK();
};
