## languages:

- ### [Arabic](#ar)
- ### [English](#en)

<div id="en"></div>

# English

## C++ Introduction

## What is C++?

C++ is a cross-platform language that can be used to create high-performance applications.

C++ was developed by Bjarne Stroustrup, as an extension to the C language.

C++ gives programmers a high level of control over system resources and memory.

The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.

## Why Use C++

C++ is one of the world's most popular programming languages.

C++ can be found in today's operating systems, Graphical User Interfaces, and embedded systems.

C++ is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs.

C++ is portable and can be used to develop applications that can be adapted to multiple platforms.

C++ is fun and easy to learn!

As C++ is close to C, C# and Java, it makes it easy for programmers to switch to C++ or vice versa.

## Difference between C and C++

C++ was developed as an extension of C, and both languages have almost the same syntax.

The main difference between C and C++ is that C++ support classes and objects, while C does not.

# C++ Getting Started

## C++ Get Started

To start using C++, you need two things:

- A text editor, like Notepad, to write C++ code
- A compiler, like GCC, to translate the C++ code into a language that the computer will understand
  There are many text editors and compilers to choose from. In this tutorial, we will use an IDE (see below).

## C++ Install IDE

An IDE (Integrated Development Environment) is used to edit AND compile the code.

Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C++ code.

**Note:** Web-based IDE's can work as well, but functionality is limited.

We will use **Code::Blocks** in our tutorial, which we believe is a good place to start.

You can find the latest version of Codeblocks at http://www.codeblocks.org/. Download the `mingw-setup.exe` file, which will install the text editor with a compiler.

## C++ Quickstart

Let's create our first C++ file.

Open Codeblocks and go to **File > New > Empty File.**

Write the following C++ code and save the file as `myfirstprogram.cpp` **(File > Save File as)**:

myfirstprogram.cpp

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

Don't worry if you don't understand the code above - we will discuss it in detail in later chapters. For now, focus on how to run the code.

In Codeblocks, it should look like this:

![tut1](https://www.w3schools.com/cpp/codeblocks2020.png)

Then, go to **Build > Build and Run** to run (execute) the program. The result will look something to this:

```sh
Hello World!
Process returned 0 (0x0) execution time : 0.011 s
Press any key to continue.
```

**Congratulations!** You have now written and executed your first C++ program.

---

## Learning C++

When learning C++, you can use our "Try it Yourself" tool, which shows both the code and the result. This will make it easier for you to understand every part as we move forward:

myfirstprogram.cpp

**Code:**

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

**Result:**

```sh
Hello World!
```

<div id="ar"></div>

---

# Arabic

## مقدمة لغة ++C

## ما هي لغة C++؟

C++ هي لغة مشتركة بين الأنظمة الأساسية يمكن استخدامها لإنشاء تطبيقات عالية الأداء.

تم تطوير لغة C++ بواسطة Bjarne Stroustrup، كامتداد للغة C.

تمنح لغة C++ المبرمجين مستوى عالٍ من التحكم في موارد النظام والذاكرة.

تم تحديث اللغة 4 مرات رئيسية في 2011 و2014 و2017 و2020 إلى C++11 وC++14 وC++17 وC++20.

## لماذا نستخدم C++

تعد لغة C++ إحدى لغات البرمجة الأكثر شهرة في العالم.

يمكن العثور على C++ في أنظمة التشغيل الحالية وواجهات المستخدم الرسومية والأنظمة المدمجة.

C++ هي لغة برمجة موجهة للكائنات والتي توفر بنية واضحة للبرامج وتسمح بإعادة استخدام التعليمات البرمجية، مما يقلل من تكاليف التطوير.

لغة C++ لغة محمولة ويمكن استخدامها لتطوير التطبيقات التي يمكن تكييفها مع منصات متعددة.

لغة C++ ممتعة وسهلة التعلم!

نظرًا لأن لغة C++ قريبة من C وC# وJava، فإنه يسهل على المبرمجين التبديل إلى لغة C++ أو العكس.

## الفرق بين C وC++

تم تطوير C++ كامتداد لـ C، وكلتا اللغتين لهما نفس بناء الجملة تقريبًا.

الفرق الرئيسي بين C وC++ هو أن C++ تدعم الفئات والكائنات، بينما لا تدعم C ذلك.

# البدء باستخدام لغة C++

## البدء باستخدام لغة C++

للبدء في استخدام C++، تحتاج إلى شيئين:

- محرر نصوص مثل Notepad لكتابة كود C++
- مترجم، مثل مجلس التعاون الخليجي، لترجمة كود C++ إلى لغة يفهمها الكمبيوتر
  هناك العديد من برامج تحرير النصوص والمجمعات للاختيار من بينها. في هذا البرنامج التعليمي، سوف نستخدم IDE (انظر أدناه).

## تثبيت C++ IDE

يتم استخدام IDE (بيئة التطوير المتكاملة) لتحرير وتجميع التعليمات البرمجية.

تشتمل بيئة التطوير المتكاملة (IDE) الشهيرة على Code::Blocks وEclipse وVisual Studio. هذه كلها مجانية، ويمكن استخدامها لتحرير وتصحيح كود C++.

**ملاحظة:** يمكن أن تعمل بيئة التطوير المتكاملة المستندة إلى الويب أيضًا، ولكن وظائفها محدودة.

سوف نستخدم **Code::Blocks** في برنامجنا التعليمي، والذي نعتقد أنه مكان جيد للبدء.

يمكنك العثور على أحدث إصدار من Codeblocks على http://www.codeblocks.org/. قم بتنزيل الملف mingw-setup.exe، الذي سيقوم بتثبيت محرر النصوص مع المترجم.

## البداية السريعة لـ C++

لنقم بإنشاء أول ملف C++ لدينا.

افتح Codeblocks وانتقل إلى **File > New > Empty File.**

اكتب كود C++ التالي واحفظ الملف باسم `myfirstprogram.cpp` **(File > Save File as)**:

myfirstprogram.cpp

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

لا تقلق إذا لم تفهم الكود أعلاه - فسنناقشه بالتفصيل في الفصول اللاحقة. في الوقت الحالي، ركز على كيفية تشغيل الكود.

في Codeblocks، يجب أن يبدو الأمر كما يلي:

![tut1](https://www.w3schools.com/cpp/codeblocks2020.png)

ثم انتقل إلى **Build > Build and Run** لتشغيل (تنفيذ) البرنامج. ستبدو النتيجة شيئًا على هذا النحو:

```sh
Hello World!
Process returned 0 (0x0) execution time : 0.011 s
Press any key to continue.
```

**تهانينا!** لقد قمت الآن بكتابة وتنفيذ أول برنامج لك بلغة C++.

---

## تعلم لغة C++

عند تعلم لغة C++، يمكنك استخدام أداة "جربها بنفسك"، والتي تعرض كلاً من الكود والنتيجة. وهذا سيسهل عليك فهم كل جزء ونحن نمضي قدمًا:

myfirstprogram.cpp

**Code:**

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

**Result:**

```sh
Hello World!
```
