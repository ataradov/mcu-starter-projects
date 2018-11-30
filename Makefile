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

.PHONY: all clean hard_clean

all:
	$(foreach TGT, $(TARGETS), make -C $(TGT)/make/ all ; )

clean:
	$(foreach TGT, $(TARGETS), make -C $(TGT)/make/ clean ; )

hard_clean:
	$(foreach TGT, $(TARGETS), rm -fr $(TGT)/make/build ; )


