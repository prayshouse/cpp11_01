struct Base {
	virtual void foo(int) {

	}
	virtual void fooFinal() final {

	}
};

// override
struct SubBase : Base {
	virtual void foo(int) override {		// legal

	}
	// virtual void foo(float) override;	// illegal
};

// final
struct SubClass1 final : Base {				// legal

};

//struct SubClass2 : SubClass1 {			// illegal
//
//};

struct SubClass3 : Base {
	//void fooFinal() {						// illegal

	//}
};


int main(void)
{

}