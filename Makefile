TARGETS = \
  samd09 \
  samd10 \
  samd11 \
  samd20 \
  samd21 \
  samda1b \
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
  sam4l \
  stm32g071 \
  stm32g031 \
  gd32f4 \

TARGETS_ALL   = $(addprefix all_,   $(TARGETS))
TARGETS_CLEAN = $(addprefix clean_, $(TARGETS))
TARGETS_HARD  = $(addprefix hard_,  $(TARGETS))

.PHONY: all clean hard_clean $(TARGETS) $(TARGETS_ALL) $(TARGETS_CLEAN) $(TARGETS_HARD)

all: $(TARGETS_ALL)

clean: $(TARGETS_CLEAN)

hard_clean: $(TARGETS_HARD)

$(TARGETS_ALL):
	make -C $(subst all_,, $@)/make/ all

$(TARGETS_CLEAN):
	make -C $(subst clean_,, $@)/make/ clean

$(TARGETS_HARD):
	rm -fr $(subst hard_,, $@)/make/build


