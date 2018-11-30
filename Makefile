TARGETS = \
  samd10 \
  samd11 \
  samd20 \
  samd21 \
  samc21 \
  samc21n \
  saml10 \
  saml11 \
  saml21a \
  saml21b \
  saml22a \
  same54 \
  samg55 \
  same70 \
  samv71 \
  sam4s \

.PHONY: $(TARGETS)

all: $(TARGETS)

$(TARGETS):
	-rm -fr $@/make/build
	make -C $@/make/ clean all
	make -C $@/make/ clean
	-rm -fr $@/make/build


